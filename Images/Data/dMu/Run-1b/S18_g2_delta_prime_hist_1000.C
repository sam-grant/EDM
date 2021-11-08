void S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__77 = new TH1D("h__77","",50,-0.5930241,0.4090859);
   h__77->SetBinContent(24,2);
   h__77->SetBinContent(25,467);
   h__77->SetBinContent(26,531);
   h__77->SetEntries(1000);
   h__77->SetStats(0);
   h__77->SetLineWidth(3);
   h__77->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__77->GetXaxis()->CenterTitle(true);
   h__77->GetXaxis()->SetLabelFont(42);
   h__77->GetXaxis()->SetTitleSize(0.04);
   h__77->GetXaxis()->SetTitleOffset(1.1);
   h__77->GetXaxis()->SetTitleFont(42);
   h__77->GetYaxis()->SetTitle("Trials");
   h__77->GetYaxis()->CenterTitle(true);
   h__77->GetYaxis()->SetNdivisions(4000510);
   h__77->GetYaxis()->SetLabelFont(42);
   h__77->GetYaxis()->SetTitleSize(0.04);
   h__77->GetYaxis()->SetTitleOffset(1.1);
   h__77->GetYaxis()->SetTitleFont(42);
   h__77->GetZaxis()->SetLabelFont(42);
   h__77->GetZaxis()->SetTitleOffset(1);
   h__77->GetZaxis()->SetTitleFont(42);
   h__77->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0915
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0068
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
