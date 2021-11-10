void S12_EDM_delta_prime_hist_1000_900-2250MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__43 = new TH1D("h__43","S12_",21,-0.4663564,-0.03038101);
   h__43->SetBinContent(8,2);
   h__43->SetBinContent(9,35);
   h__43->SetBinContent(10,381);
   h__43->SetBinContent(11,534);
   h__43->SetBinContent(12,48);
   h__43->SetEntries(1000);
   h__43->SetStats(0);
   h__43->SetLineWidth(3);
   h__43->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__43->GetXaxis()->CenterTitle(true);
   h__43->GetXaxis()->SetLabelFont(42);
   h__43->GetXaxis()->SetTitleSize(0.04);
   h__43->GetXaxis()->SetTitleOffset(1.1);
   h__43->GetXaxis()->SetTitleFont(42);
   h__43->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__43->GetYaxis()->CenterTitle(true);
   h__43->GetYaxis()->SetNdivisions(4000510);
   h__43->GetYaxis()->SetLabelFont(42);
   h__43->GetYaxis()->SetTitleSize(0.04);
   h__43->GetYaxis()->SetTitleOffset(1.1);
   h__43->GetYaxis()->SetTitleFont(42);
   h__43->GetZaxis()->SetLabelFont(42);
   h__43->GetZaxis()->SetTitleOffset(1);
   h__43->GetZaxis()->SetTitleFont(42);
   h__43->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.2567
#pm0.0004
");
   pt_LaTex = pt->AddText("0.012
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
