void r_res()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *r_res__2 = new TH1D("r_res__2","",60,-30,30);
   r_res__2->SetBinContent(0,6);
   r_res__2->SetBinContent(1,6);
   r_res__2->SetBinContent(2,7);
   r_res__2->SetBinContent(3,6);
   r_res__2->SetBinContent(4,10);
   r_res__2->SetBinContent(5,12);
   r_res__2->SetBinContent(6,12);
   r_res__2->SetBinContent(7,18);
   r_res__2->SetBinContent(8,43);
   r_res__2->SetBinContent(9,46);
   r_res__2->SetBinContent(10,83);
   r_res__2->SetBinContent(11,90);
   r_res__2->SetBinContent(12,139);
   r_res__2->SetBinContent(13,217);
   r_res__2->SetBinContent(14,345);
   r_res__2->SetBinContent(15,490);
   r_res__2->SetBinContent(16,827);
   r_res__2->SetBinContent(17,1316);
   r_res__2->SetBinContent(18,2177);
   r_res__2->SetBinContent(19,3458);
   r_res__2->SetBinContent(20,5761);
   r_res__2->SetBinContent(21,9643);
   r_res__2->SetBinContent(22,16522);
   r_res__2->SetBinContent(23,28431);
   r_res__2->SetBinContent(24,49451);
   r_res__2->SetBinContent(25,87444);
   r_res__2->SetBinContent(26,147692);
   r_res__2->SetBinContent(27,236819);
   r_res__2->SetBinContent(28,341376);
   r_res__2->SetBinContent(29,428861);
   r_res__2->SetBinContent(30,452589);
   r_res__2->SetBinContent(31,376588);
   r_res__2->SetBinContent(32,249777);
   r_res__2->SetBinContent(33,144938);
   r_res__2->SetBinContent(34,82008);
   r_res__2->SetBinContent(35,46782);
   r_res__2->SetBinContent(36,27114);
   r_res__2->SetBinContent(37,16734);
   r_res__2->SetBinContent(38,10251);
   r_res__2->SetBinContent(39,6571);
   r_res__2->SetBinContent(40,4284);
   r_res__2->SetBinContent(41,2944);
   r_res__2->SetBinContent(42,2013);
   r_res__2->SetBinContent(43,1500);
   r_res__2->SetBinContent(44,1065);
   r_res__2->SetBinContent(45,778);
   r_res__2->SetBinContent(46,617);
   r_res__2->SetBinContent(47,530);
   r_res__2->SetBinContent(48,418);
   r_res__2->SetBinContent(49,327);
   r_res__2->SetBinContent(50,299);
   r_res__2->SetBinContent(51,238);
   r_res__2->SetBinContent(52,178);
   r_res__2->SetBinContent(53,186);
   r_res__2->SetBinContent(54,169);
   r_res__2->SetBinContent(55,173);
   r_res__2->SetBinContent(56,169);
   r_res__2->SetBinContent(57,123);
   r_res__2->SetBinContent(58,143);
   r_res__2->SetBinContent(59,116);
   r_res__2->SetBinContent(60,122);
   r_res__2->SetBinContent(61,2232);
   r_res__2->SetEntries(2793284);
   r_res__2->SetStats(0);
   r_res__2->SetLineWidth(2);
   r_res__2->GetXaxis()->SetTitle("#Delta r (truth #minus reco) [mm]");
   r_res__2->GetXaxis()->CenterTitle(true);
   r_res__2->GetXaxis()->SetLabelFont(42);
   r_res__2->GetXaxis()->SetTitleSize(0.04);
   r_res__2->GetXaxis()->SetTitleOffset(1.1);
   r_res__2->GetXaxis()->SetTitleFont(42);
   r_res__2->GetYaxis()->SetTitle("Decay vertices / 1
 mm");
   r_res__2->GetYaxis()->CenterTitle(true);
   r_res__2->GetYaxis()->SetNdivisions(4000510);
   r_res__2->GetYaxis()->SetLabelFont(42);
   r_res__2->GetYaxis()->SetTitleSize(0.04);
   r_res__2->GetYaxis()->SetTitleOffset(1.1);
   r_res__2->GetYaxis()->SetTitleFont(42);
   r_res__2->GetZaxis()->SetLabelFont(42);
   r_res__2->GetZaxis()->SetTitleOffset(1);
   r_res__2->GetZaxis()->SetTitleFont(42);
   r_res__2->Draw("HIST ][");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("#LT#Deltar#GT [mm]");
   pt_LaTex = pt->AddText("#sigma_{r} [mm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("-0.938
#pm0.002
");
   pt_LaTex = pt->AddText("3.077
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
