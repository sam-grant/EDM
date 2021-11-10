void S12S18_g2_delta_prime_hist_1000_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__48 = new TH1D("h__48","S12S18_",20,-0.2027135,0.1973669);
   h__48->SetBinContent(10,22);
   h__48->SetBinContent(11,978);
   h__48->SetEntries(1000);
   h__48->SetStats(0);
   h__48->SetLineWidth(3);
   h__48->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__48->GetXaxis()->CenterTitle(true);
   h__48->GetXaxis()->SetLabelFont(42);
   h__48->GetXaxis()->SetTitleSize(0.04);
   h__48->GetXaxis()->SetTitleOffset(1.1);
   h__48->GetXaxis()->SetTitleFont(42);
   h__48->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__48->GetYaxis()->CenterTitle(true);
   h__48->GetYaxis()->SetNdivisions(4000510);
   h__48->GetYaxis()->SetLabelFont(42);
   h__48->GetYaxis()->SetTitleSize(0.04);
   h__48->GetYaxis()->SetTitleOffset(1.1);
   h__48->GetYaxis()->SetTitleFont(42);
   h__48->GetZaxis()->SetLabelFont(42);
   h__48->GetZaxis()->SetTitleOffset(1);
   h__48->GetZaxis()->SetTitleFont(42);
   h__48->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0008626
#pm3e-05
");
   pt_LaTex = pt->AddText("0.00091
#pm2e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
