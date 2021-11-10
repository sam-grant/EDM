void S12S18_EDM_delta_prime_hist_1000_825-2375MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__33 = new TH1D("h__33","S12S18_",20,-0.199257,0.2053689);
   h__33->SetBinContent(10,364);
   h__33->SetBinContent(11,636);
   h__33->SetEntries(1000);
   h__33->SetStats(0);
   h__33->SetLineWidth(3);
   h__33->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__33->GetXaxis()->CenterTitle(true);
   h__33->GetXaxis()->SetLabelFont(42);
   h__33->GetXaxis()->SetTitleSize(0.04);
   h__33->GetXaxis()->SetTitleOffset(1.1);
   h__33->GetXaxis()->SetTitleFont(42);
   h__33->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__33->GetYaxis()->CenterTitle(true);
   h__33->GetYaxis()->SetNdivisions(4000510);
   h__33->GetYaxis()->SetLabelFont(42);
   h__33->GetYaxis()->SetTitleSize(0.04);
   h__33->GetYaxis()->SetTitleOffset(1.1);
   h__33->GetYaxis()->SetTitleFont(42);
   h__33->GetZaxis()->SetLabelFont(42);
   h__33->GetZaxis()->SetTitleOffset(1);
   h__33->GetZaxis()->SetTitleFont(42);
   h__33->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.003621
#pm5e-05
");
   pt_LaTex = pt->AddText("0.0016
#pm4e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
