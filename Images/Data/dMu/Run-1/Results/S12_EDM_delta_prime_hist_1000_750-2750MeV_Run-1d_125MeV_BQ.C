void S12_EDM_delta_prime_hist_1000_750-2750MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:54:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__19 = new TH1D("h__19","S12",21,0.3097148,0.7397462);
   h__19->SetBinContent(6,2);
   h__19->SetBinContent(7,10);
   h__19->SetBinContent(8,42);
   h__19->SetBinContent(9,133);
   h__19->SetBinContent(10,153);
   h__19->SetBinContent(11,199);
   h__19->SetBinContent(12,149);
   h__19->SetBinContent(13,119);
   h__19->SetBinContent(14,94);
   h__19->SetBinContent(15,54);
   h__19->SetBinContent(16,19);
   h__19->SetBinContent(17,15);
   h__19->SetBinContent(18,3);
   h__19->SetBinContent(19,3);
   h__19->SetBinContent(20,2);
   h__19->SetBinContent(21,1);
   h__19->SetBinContent(22,2);
   h__19->SetEntries(1000);
   h__19->SetStats(0);
   h__19->SetLineWidth(3);
   h__19->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__19->GetXaxis()->CenterTitle(true);
   h__19->GetXaxis()->SetLabelFont(42);
   h__19->GetXaxis()->SetTitleSize(0.04);
   h__19->GetXaxis()->SetTitleOffset(1.1);
   h__19->GetXaxis()->SetTitleFont(42);
   h__19->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__19->GetYaxis()->CenterTitle(true);
   h__19->GetYaxis()->SetNdivisions(4000510);
   h__19->GetYaxis()->SetLabelFont(42);
   h__19->GetYaxis()->SetTitleSize(0.04);
   h__19->GetYaxis()->SetTitleOffset(1.1);
   h__19->GetYaxis()->SetTitleFont(42);
   h__19->GetZaxis()->SetLabelFont(42);
   h__19->GetZaxis()->SetTitleOffset(1);
   h__19->GetZaxis()->SetTitleFont(42);
   h__19->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5359
#pm0.001
");
   pt_LaTex = pt->AddText("0.046
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
