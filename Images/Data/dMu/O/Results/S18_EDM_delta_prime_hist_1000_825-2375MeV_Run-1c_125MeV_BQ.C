void S18_EDM_delta_prime_hist_1000_825-2375MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__38 = new TH1D("h__38","S18_",21,-0.3427738,0.08396901);
   h__38->SetBinContent(9,1);
   h__38->SetBinContent(10,21);
   h__38->SetBinContent(11,740);
   h__38->SetBinContent(12,238);
   h__38->SetEntries(1000);
   h__38->SetStats(0);
   h__38->SetLineWidth(3);
   h__38->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__38->GetXaxis()->CenterTitle(true);
   h__38->GetXaxis()->SetLabelFont(42);
   h__38->GetXaxis()->SetTitleSize(0.04);
   h__38->GetXaxis()->SetTitleOffset(1.1);
   h__38->GetXaxis()->SetTitleFont(42);
   h__38->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__38->GetYaxis()->CenterTitle(true);
   h__38->GetYaxis()->SetNdivisions(4000510);
   h__38->GetYaxis()->SetLabelFont(42);
   h__38->GetYaxis()->SetTitleSize(0.04);
   h__38->GetYaxis()->SetTitleOffset(1.1);
   h__38->GetYaxis()->SetTitleFont(42);
   h__38->GetZaxis()->SetLabelFont(42);
   h__38->GetZaxis()->SetTitleOffset(1);
   h__38->GetZaxis()->SetTitleFont(42);
   h__38->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.1242
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0071
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
