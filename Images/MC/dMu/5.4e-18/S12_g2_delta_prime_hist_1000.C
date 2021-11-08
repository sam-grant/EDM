void S12_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__63 = new TH1D("h__63","",51,-0.6444394,0.387017);
   h__63->SetBinContent(24,1);
   h__63->SetBinContent(25,187);
   h__63->SetBinContent(26,763);
   h__63->SetBinContent(27,49);
   h__63->SetEntries(1000);
   h__63->SetStats(0);
   h__63->SetLineWidth(3);
   h__63->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__63->GetXaxis()->CenterTitle(true);
   h__63->GetXaxis()->SetLabelFont(42);
   h__63->GetXaxis()->SetTitleSize(0.04);
   h__63->GetXaxis()->SetTitleOffset(1.1);
   h__63->GetXaxis()->SetTitleFont(42);
   h__63->GetYaxis()->SetTitle("Trials");
   h__63->GetYaxis()->CenterTitle(true);
   h__63->GetYaxis()->SetNdivisions(4000510);
   h__63->GetYaxis()->SetLabelFont(42);
   h__63->GetYaxis()->SetTitleSize(0.04);
   h__63->GetYaxis()->SetTitleOffset(1.1);
   h__63->GetYaxis()->SetTitleFont(42);
   h__63->GetZaxis()->SetLabelFont(42);
   h__63->GetZaxis()->SetTitleOffset(1);
   h__63->GetZaxis()->SetTitleFont(42);
   h__63->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.1314
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0081
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
