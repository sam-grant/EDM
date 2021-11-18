void S18_EDM_delta_prime_hist_1000_750-2500MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:46:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__14 = new TH1D("h__14","S18_",22,0.3502716,0.8081098);
   h__14->SetBinContent(7,1);
   h__14->SetBinContent(8,1);
   h__14->SetBinContent(9,14);
   h__14->SetBinContent(10,86);
   h__14->SetBinContent(11,189);
   h__14->SetBinContent(12,294);
   h__14->SetBinContent(13,243);
   h__14->SetBinContent(14,111);
   h__14->SetBinContent(15,44);
   h__14->SetBinContent(16,13);
   h__14->SetBinContent(17,3);
   h__14->SetBinContent(18,1);
   h__14->SetEntries(1000);
   h__14->SetStats(0);
   h__14->SetLineWidth(3);
   h__14->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__14->GetXaxis()->CenterTitle(true);
   h__14->GetXaxis()->SetLabelFont(42);
   h__14->GetXaxis()->SetTitleSize(0.04);
   h__14->GetXaxis()->SetTitleOffset(1.1);
   h__14->GetXaxis()->SetTitleFont(42);
   h__14->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__14->GetYaxis()->CenterTitle(true);
   h__14->GetYaxis()->SetNdivisions(4000510);
   h__14->GetYaxis()->SetLabelFont(42);
   h__14->GetYaxis()->SetTitleSize(0.04);
   h__14->GetYaxis()->SetTitleOffset(1.1);
   h__14->GetYaxis()->SetTitleFont(42);
   h__14->GetZaxis()->SetLabelFont(42);
   h__14->GetZaxis()->SetTitleOffset(1);
   h__14->GetZaxis()->SetTitleFont(42);
   h__14->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.595
#pm0.0009
");
   pt_LaTex = pt->AddText("0.029
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
