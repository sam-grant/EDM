void S12_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","",67,0.9825044,2.330941);
   h__6->SetBinContent(16,1);
   h__6->SetBinContent(19,2);
   h__6->SetBinContent(20,1);
   h__6->SetBinContent(21,4);
   h__6->SetBinContent(22,4);
   h__6->SetBinContent(23,10);
   h__6->SetBinContent(24,7);
   h__6->SetBinContent(25,27);
   h__6->SetBinContent(26,26);
   h__6->SetBinContent(27,33);
   h__6->SetBinContent(28,44);
   h__6->SetBinContent(29,36);
   h__6->SetBinContent(30,54);
   h__6->SetBinContent(31,42);
   h__6->SetBinContent(32,62);
   h__6->SetBinContent(33,59);
   h__6->SetBinContent(34,63);
   h__6->SetBinContent(35,52);
   h__6->SetBinContent(36,74);
   h__6->SetBinContent(37,62);
   h__6->SetBinContent(38,56);
   h__6->SetBinContent(39,43);
   h__6->SetBinContent(40,39);
   h__6->SetBinContent(41,39);
   h__6->SetBinContent(42,25);
   h__6->SetBinContent(43,25);
   h__6->SetBinContent(44,19);
   h__6->SetBinContent(45,18);
   h__6->SetBinContent(46,16);
   h__6->SetBinContent(47,11);
   h__6->SetBinContent(48,13);
   h__6->SetBinContent(49,11);
   h__6->SetBinContent(50,3);
   h__6->SetBinContent(51,3);
   h__6->SetBinContent(52,4);
   h__6->SetBinContent(53,4);
   h__6->SetBinContent(54,2);
   h__6->SetBinContent(55,1);
   h__6->SetBinContent(57,1);
   h__6->SetBinContent(61,1);
   h__6->SetBinContent(64,1);
   h__6->SetBinContent(66,1);
   h__6->SetBinContent(68,1);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__6->GetXaxis()->CenterTitle(true);
   h__6->GetXaxis()->SetLabelFont(42);
   h__6->GetXaxis()->SetTitleSize(0.04);
   h__6->GetXaxis()->SetTitleOffset(1.1);
   h__6->GetXaxis()->SetTitleFont(42);
   h__6->GetYaxis()->SetTitle("Trials");
   h__6->GetYaxis()->CenterTitle(true);
   h__6->GetYaxis()->SetNdivisions(4000510);
   h__6->GetYaxis()->SetLabelFont(42);
   h__6->GetYaxis()->SetTitleSize(0.04);
   h__6->GetYaxis()->SetTitleOffset(1.1);
   h__6->GetYaxis()->SetTitleFont(42);
   h__6->GetZaxis()->SetLabelFont(42);
   h__6->GetZaxis()->SetTitleOffset(1);
   h__6->GetZaxis()->SetTitleFont(42);
   h__6->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.682
#pm0.004
");
   pt_LaTex = pt->AddText("0.13
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
