void S12S18_g2_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 12:16:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__18 = new TH1D("h__18","S12S18",21,-0.2414759,0.1800343);
   h__18->SetBinContent(10,10);
   h__18->SetBinContent(11,370);
   h__18->SetBinContent(12,597);
   h__18->SetBinContent(13,23);
   h__18->SetEntries(1000);
   h__18->SetStats(0);
   h__18->SetLineWidth(3);
   h__18->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__18->GetXaxis()->CenterTitle(true);
   h__18->GetXaxis()->SetLabelFont(42);
   h__18->GetXaxis()->SetTitleSize(0.04);
   h__18->GetXaxis()->SetTitleOffset(1.1);
   h__18->GetXaxis()->SetTitleFont(42);
   h__18->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__18->GetYaxis()->CenterTitle(true);
   h__18->GetYaxis()->SetNdivisions(4000510);
   h__18->GetYaxis()->SetLabelFont(42);
   h__18->GetYaxis()->SetTitleSize(0.04);
   h__18->GetYaxis()->SetTitleOffset(1.1);
   h__18->GetYaxis()->SetTitleFont(42);
   h__18->GetZaxis()->SetLabelFont(42);
   h__18->GetZaxis()->SetTitleOffset(1);
   h__18->GetZaxis()->SetTitleFont(42);
   h__18->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.01817
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0087
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
