void S12_EDM_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:48:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__13 = new TH1D("h__13","S12",26,0.342873,0.8687378);
   h__13->SetBinContent(7,1);
   h__13->SetBinContent(8,8);
   h__13->SetBinContent(9,19);
   h__13->SetBinContent(10,66);
   h__13->SetBinContent(11,114);
   h__13->SetBinContent(12,134);
   h__13->SetBinContent(13,165);
   h__13->SetBinContent(14,168);
   h__13->SetBinContent(15,125);
   h__13->SetBinContent(16,91);
   h__13->SetBinContent(17,43);
   h__13->SetBinContent(18,30);
   h__13->SetBinContent(19,17);
   h__13->SetBinContent(20,14);
   h__13->SetBinContent(21,1);
   h__13->SetBinContent(23,1);
   h__13->SetBinContent(24,1);
   h__13->SetBinContent(25,1);
   h__13->SetBinContent(26,1);
   h__13->SetEntries(1000);
   h__13->SetStats(0);
   h__13->SetLineWidth(3);
   h__13->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__13->GetXaxis()->CenterTitle(true);
   h__13->GetXaxis()->SetLabelFont(42);
   h__13->GetXaxis()->SetTitleSize(0.04);
   h__13->GetXaxis()->SetTitleOffset(1.1);
   h__13->GetXaxis()->SetTitleFont(42);
   h__13->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__13->GetYaxis()->CenterTitle(true);
   h__13->GetYaxis()->SetNdivisions(4000510);
   h__13->GetYaxis()->SetLabelFont(42);
   h__13->GetYaxis()->SetTitleSize(0.04);
   h__13->GetYaxis()->SetTitleOffset(1.1);
   h__13->GetYaxis()->SetTitleFont(42);
   h__13->GetZaxis()->SetLabelFont(42);
   h__13->GetZaxis()->SetTitleOffset(1);
   h__13->GetZaxis()->SetTitleFont(42);
   h__13->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.6077
#pm0.002
");
   pt_LaTex = pt->AddText("0.05
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
