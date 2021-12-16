void g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:44:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","",50,-0.5509575,0.4618558);
   h__6->SetBinContent(25,245);
   h__6->SetBinContent(26,755);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__6->GetXaxis()->CenterTitle(true);
   h__6->GetXaxis()->SetLabelFont(42);
   h__6->GetXaxis()->SetTitleSize(0.04);
   h__6->GetXaxis()->SetTitleOffset(1.1);
   h__6->GetXaxis()->SetTitleFont(42);
   h__6->GetYaxis()->SetTitle("Trials");
   h__6->GetYaxis()->CenterTitle(true);
   h__6->GetYaxis()->SetNdivisions(4000510);
   h__6->GetYaxis()->SetLabelFont(42);
   h__6->GetYaxis()->SetTitleSize(0.04);
   h__6->GetYaxis()->SetTitleOffset(1.1);
   h__6->GetYaxis()->SetTitleFont(42);
   h__6->GetZaxis()->SetLabelFont(42);
   h__6->GetZaxis()->SetTitleOffset(1);
   h__6->GetZaxis()->SetTitleFont(42);
   h__6->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("-0.04251
#pm9e-05
");
   pt_LaTex = pt->AddText("0.003
#pm7e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
