void S0_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__5 = new TH1D("h__5","",63,1.014769,2.289464);
   h__5->SetBinContent(16,1);
   h__5->SetBinContent(18,1);
   h__5->SetBinContent(19,1);
   h__5->SetBinContent(20,2);
   h__5->SetBinContent(21,3);
   h__5->SetBinContent(22,6);
   h__5->SetBinContent(23,14);
   h__5->SetBinContent(24,16);
   h__5->SetBinContent(25,29);
   h__5->SetBinContent(26,40);
   h__5->SetBinContent(27,35);
   h__5->SetBinContent(28,52);
   h__5->SetBinContent(29,49);
   h__5->SetBinContent(30,60);
   h__5->SetBinContent(31,56);
   h__5->SetBinContent(32,66);
   h__5->SetBinContent(33,69);
   h__5->SetBinContent(34,77);
   h__5->SetBinContent(35,70);
   h__5->SetBinContent(36,64);
   h__5->SetBinContent(37,42);
   h__5->SetBinContent(38,63);
   h__5->SetBinContent(39,36);
   h__5->SetBinContent(40,23);
   h__5->SetBinContent(41,27);
   h__5->SetBinContent(42,21);
   h__5->SetBinContent(43,17);
   h__5->SetBinContent(44,13);
   h__5->SetBinContent(45,15);
   h__5->SetBinContent(46,5);
   h__5->SetBinContent(47,6);
   h__5->SetBinContent(48,7);
   h__5->SetBinContent(49,4);
   h__5->SetBinContent(50,4);
   h__5->SetBinContent(51,2);
   h__5->SetBinContent(55,1);
   h__5->SetBinContent(59,2);
   h__5->SetBinContent(62,1);
   h__5->SetEntries(1000);
   h__5->SetStats(0);
   h__5->SetLineWidth(3);
   h__5->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__5->GetXaxis()->CenterTitle(true);
   h__5->GetXaxis()->SetLabelFont(42);
   h__5->GetXaxis()->SetTitleSize(0.04);
   h__5->GetXaxis()->SetTitleOffset(1.1);
   h__5->GetXaxis()->SetTitleFont(42);
   h__5->GetYaxis()->SetTitle("Trials");
   h__5->GetYaxis()->CenterTitle(true);
   h__5->GetYaxis()->SetNdivisions(4000510);
   h__5->GetYaxis()->SetLabelFont(42);
   h__5->GetYaxis()->SetTitleSize(0.04);
   h__5->GetYaxis()->SetTitleOffset(1.1);
   h__5->GetYaxis()->SetTitleFont(42);
   h__5->GetZaxis()->SetLabelFont(42);
   h__5->GetZaxis()->SetTitleOffset(1);
   h__5->GetZaxis()->SetTitleFont(42);
   h__5->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.686
#pm0.004
");
   pt_LaTex = pt->AddText("0.12
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
