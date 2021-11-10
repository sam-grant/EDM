void S12S18_g2_delta_prime_hist_1000_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__12 = new TH1D("h__12","S12S18_",20,-0.1971717,0.2147714);
   h__12->SetBinContent(10,130);
   h__12->SetBinContent(11,866);
   h__12->SetBinContent(12,4);
   h__12->SetEntries(1000);
   h__12->SetStats(0);
   h__12->SetLineWidth(3);
   h__12->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__12->GetXaxis()->CenterTitle(true);
   h__12->GetXaxis()->SetLabelFont(42);
   h__12->GetXaxis()->SetTitleSize(0.04);
   h__12->GetXaxis()->SetTitleOffset(1.1);
   h__12->GetXaxis()->SetTitleFont(42);
   h__12->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__12->GetYaxis()->CenterTitle(true);
   h__12->GetYaxis()->SetNdivisions(4000510);
   h__12->GetYaxis()->SetLabelFont(42);
   h__12->GetYaxis()->SetTitleSize(0.04);
   h__12->GetYaxis()->SetTitleOffset(1.1);
   h__12->GetYaxis()->SetTitleFont(42);
   h__12->GetZaxis()->SetLabelFont(42);
   h__12->GetZaxis()->SetTitleOffset(1);
   h__12->GetZaxis()->SetTitleFont(42);
   h__12->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.01553
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0056
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
