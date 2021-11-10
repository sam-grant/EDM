void S12_EDM_delta_prime_hist_1000_825-2375MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__7 = new TH1D("h__7","S12_",20,0.0600685,0.4800436);
   h__7->SetBinContent(9,18);
   h__7->SetBinContent(10,285);
   h__7->SetBinContent(11,536);
   h__7->SetBinContent(12,141);
   h__7->SetBinContent(13,19);
   h__7->SetBinContent(14,1);
   h__7->SetEntries(1000);
   h__7->SetStats(0);
   h__7->SetLineWidth(3);
   h__7->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__7->GetXaxis()->CenterTitle(true);
   h__7->GetXaxis()->SetLabelFont(42);
   h__7->GetXaxis()->SetTitleSize(0.04);
   h__7->GetXaxis()->SetTitleOffset(1.1);
   h__7->GetXaxis()->SetTitleFont(42);
   h__7->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__7->GetYaxis()->CenterTitle(true);
   h__7->GetYaxis()->SetNdivisions(4000510);
   h__7->GetYaxis()->SetLabelFont(42);
   h__7->GetYaxis()->SetTitleSize(0.04);
   h__7->GetYaxis()->SetTitleOffset(1.1);
   h__7->GetYaxis()->SetTitleFont(42);
   h__7->GetZaxis()->SetLabelFont(42);
   h__7->GetZaxis()->SetTitleOffset(1);
   h__7->GetZaxis()->SetTitleFont(42);
   h__7->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2774
#pm0.0005
");
   pt_LaTex = pt->AddText("0.015
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
