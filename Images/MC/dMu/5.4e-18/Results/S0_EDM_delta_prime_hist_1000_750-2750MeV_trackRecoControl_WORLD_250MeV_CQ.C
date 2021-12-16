void S0_EDM_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__23 = new TH1D("h__23","",70,1.008332,2.421187);
   h__23->SetBinContent(18,1);
   h__23->SetBinContent(23,1);
   h__23->SetBinContent(24,3);
   h__23->SetBinContent(25,6);
   h__23->SetBinContent(26,7);
   h__23->SetBinContent(27,10);
   h__23->SetBinContent(28,20);
   h__23->SetBinContent(29,27);
   h__23->SetBinContent(30,40);
   h__23->SetBinContent(31,43);
   h__23->SetBinContent(32,54);
   h__23->SetBinContent(33,72);
   h__23->SetBinContent(34,68);
   h__23->SetBinContent(35,63);
   h__23->SetBinContent(36,67);
   h__23->SetBinContent(37,69);
   h__23->SetBinContent(38,61);
   h__23->SetBinContent(39,54);
   h__23->SetBinContent(40,52);
   h__23->SetBinContent(41,50);
   h__23->SetBinContent(42,44);
   h__23->SetBinContent(43,30);
   h__23->SetBinContent(44,22);
   h__23->SetBinContent(45,23);
   h__23->SetBinContent(46,19);
   h__23->SetBinContent(47,16);
   h__23->SetBinContent(48,17);
   h__23->SetBinContent(49,10);
   h__23->SetBinContent(50,9);
   h__23->SetBinContent(51,8);
   h__23->SetBinContent(52,7);
   h__23->SetBinContent(53,4);
   h__23->SetBinContent(54,7);
   h__23->SetBinContent(55,4);
   h__23->SetBinContent(57,2);
   h__23->SetBinContent(58,3);
   h__23->SetBinContent(59,2);
   h__23->SetBinContent(62,1);
   h__23->SetBinContent(65,1);
   h__23->SetBinContent(70,1);
   h__23->SetBinContent(71,2);
   h__23->SetEntries(1000);
   h__23->SetStats(0);
   h__23->SetLineWidth(3);
   h__23->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__23->GetXaxis()->CenterTitle(true);
   h__23->GetXaxis()->SetLabelFont(42);
   h__23->GetXaxis()->SetTitleSize(0.04);
   h__23->GetXaxis()->SetTitleOffset(1.1);
   h__23->GetXaxis()->SetTitleFont(42);
   h__23->GetYaxis()->SetTitle("Trials");
   h__23->GetYaxis()->CenterTitle(true);
   h__23->GetYaxis()->SetNdivisions(4000510);
   h__23->GetYaxis()->SetLabelFont(42);
   h__23->GetYaxis()->SetTitleSize(0.04);
   h__23->GetYaxis()->SetTitleOffset(1.1);
   h__23->GetYaxis()->SetTitleFont(42);
   h__23->GetZaxis()->SetLabelFont(42);
   h__23->GetZaxis()->SetTitleOffset(1);
   h__23->GetZaxis()->SetTitleFont(42);
   h__23->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.755
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
