void r_res()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *r_res__4 = new TH1D("r_res__4","",60,-30,30);
   r_res__4->SetBinContent(0,2);
   r_res__4->SetBinContent(1,4);
   r_res__4->SetBinContent(2,2);
   r_res__4->SetBinContent(3,1);
   r_res__4->SetBinContent(5,2);
   r_res__4->SetBinContent(6,2);
   r_res__4->SetBinContent(7,1);
   r_res__4->SetBinContent(8,3);
   r_res__4->SetBinContent(9,6);
   r_res__4->SetBinContent(10,4);
   r_res__4->SetBinContent(11,15);
   r_res__4->SetBinContent(12,15);
   r_res__4->SetBinContent(13,13);
   r_res__4->SetBinContent(14,26);
   r_res__4->SetBinContent(15,46);
   r_res__4->SetBinContent(16,73);
   r_res__4->SetBinContent(17,141);
   r_res__4->SetBinContent(18,219);
   r_res__4->SetBinContent(19,338);
   r_res__4->SetBinContent(20,515);
   r_res__4->SetBinContent(21,987);
   r_res__4->SetBinContent(22,1524);
   r_res__4->SetBinContent(23,2645);
   r_res__4->SetBinContent(24,4659);
   r_res__4->SetBinContent(25,7855);
   r_res__4->SetBinContent(26,12854);
   r_res__4->SetBinContent(27,20290);
   r_res__4->SetBinContent(28,28172);
   r_res__4->SetBinContent(29,34854);
   r_res__4->SetBinContent(30,36636);
   r_res__4->SetBinContent(31,31167);
   r_res__4->SetBinContent(32,21524);
   r_res__4->SetBinContent(33,13067);
   r_res__4->SetBinContent(34,7618);
   r_res__4->SetBinContent(35,4316);
   r_res__4->SetBinContent(36,2614);
   r_res__4->SetBinContent(37,1602);
   r_res__4->SetBinContent(38,968);
   r_res__4->SetBinContent(39,622);
   r_res__4->SetBinContent(40,412);
   r_res__4->SetBinContent(41,279);
   r_res__4->SetBinContent(42,178);
   r_res__4->SetBinContent(43,133);
   r_res__4->SetBinContent(44,88);
   r_res__4->SetBinContent(45,58);
   r_res__4->SetBinContent(46,51);
   r_res__4->SetBinContent(47,40);
   r_res__4->SetBinContent(48,26);
   r_res__4->SetBinContent(49,39);
   r_res__4->SetBinContent(50,25);
   r_res__4->SetBinContent(51,18);
   r_res__4->SetBinContent(52,22);
   r_res__4->SetBinContent(53,15);
   r_res__4->SetBinContent(54,14);
   r_res__4->SetBinContent(55,22);
   r_res__4->SetBinContent(56,17);
   r_res__4->SetBinContent(57,11);
   r_res__4->SetBinContent(58,13);
   r_res__4->SetBinContent(59,7);
   r_res__4->SetBinContent(60,9);
   r_res__4->SetBinContent(61,260);
   r_res__4->SetEntries(237139);
   r_res__4->SetStats(0);
   r_res__4->SetLineWidth(2);
   r_res__4->GetXaxis()->SetTitle("#Delta r (truth #minus reco) [mm]");
   r_res__4->GetXaxis()->CenterTitle(true);
   r_res__4->GetXaxis()->SetLabelFont(42);
   r_res__4->GetXaxis()->SetTitleSize(0.04);
   r_res__4->GetXaxis()->SetTitleOffset(1.1);
   r_res__4->GetXaxis()->SetTitleFont(42);
   r_res__4->GetYaxis()->SetTitle("Decay vertices / 1
 mm");
   r_res__4->GetYaxis()->CenterTitle(true);
   r_res__4->GetYaxis()->SetNdivisions(4000510);
   r_res__4->GetYaxis()->SetLabelFont(42);
   r_res__4->GetYaxis()->SetTitleSize(0.04);
   r_res__4->GetYaxis()->SetTitleOffset(1.2);
   r_res__4->GetYaxis()->SetTitleFont(42);
   r_res__4->GetZaxis()->SetLabelFont(42);
   r_res__4->GetZaxis()->SetTitleOffset(1);
   r_res__4->GetZaxis()->SetTitleFont(42);
   r_res__4->Draw("HIST ][");
   
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
   pt_LaTex = pt->AddText("-0.928
#pm0.007
");
   pt_LaTex = pt->AddText("3.185
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
