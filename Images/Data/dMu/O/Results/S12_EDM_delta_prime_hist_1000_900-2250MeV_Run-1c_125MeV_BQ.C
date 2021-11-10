void S12_EDM_delta_prime_hist_1000_900-2250MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__37 = new TH1D("h__37","S12_",20,-0.2760121,0.1345338);
   h__37->SetBinContent(10,227);
   h__37->SetBinContent(11,748);
   h__37->SetBinContent(12,25);
   h__37->SetEntries(1000);
   h__37->SetStats(0);
   h__37->SetLineWidth(3);
   h__37->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__37->GetXaxis()->CenterTitle(true);
   h__37->GetXaxis()->SetLabelFont(42);
   h__37->GetXaxis()->SetTitleSize(0.04);
   h__37->GetXaxis()->SetTitleOffset(1.1);
   h__37->GetXaxis()->SetTitleFont(42);
   h__37->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__37->GetYaxis()->CenterTitle(true);
   h__37->GetYaxis()->SetNdivisions(4000510);
   h__37->GetYaxis()->SetLabelFont(42);
   h__37->GetYaxis()->SetTitleSize(0.04);
   h__37->GetYaxis()->SetTitleOffset(1.1);
   h__37->GetYaxis()->SetTitleFont(42);
   h__37->GetZaxis()->SetLabelFont(42);
   h__37->GetZaxis()->SetTitleOffset(1);
   h__37->GetZaxis()->SetTitleFont(42);
   h__37->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.06501
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0078
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
