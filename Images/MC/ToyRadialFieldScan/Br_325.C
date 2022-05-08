void Br_325()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__37 = new TH1D("__37","Number of sub-runs: 325",1000,0,20);
   __37->SetBinContent(362,1);
   __37->SetBinContent(367,1);
   __37->SetBinContent(369,1);
   __37->SetBinContent(372,1);
   __37->SetBinContent(374,2);
   __37->SetBinContent(375,6);
   __37->SetBinContent(376,2);
   __37->SetBinContent(377,2);
   __37->SetBinContent(378,2);
   __37->SetBinContent(379,7);
   __37->SetBinContent(380,5);
   __37->SetBinContent(381,6);
   __37->SetBinContent(382,9);
   __37->SetBinContent(383,9);
   __37->SetBinContent(384,13);
   __37->SetBinContent(385,17);
   __37->SetBinContent(386,14);
   __37->SetBinContent(387,23);
   __37->SetBinContent(388,17);
   __37->SetBinContent(389,21);
   __37->SetBinContent(390,17);
   __37->SetBinContent(391,22);
   __37->SetBinContent(392,24);
   __37->SetBinContent(393,26);
   __37->SetBinContent(394,32);
   __37->SetBinContent(395,28);
   __37->SetBinContent(396,29);
   __37->SetBinContent(397,32);
   __37->SetBinContent(398,38);
   __37->SetBinContent(399,35);
   __37->SetBinContent(400,40);
   __37->SetBinContent(401,44);
   __37->SetBinContent(402,46);
   __37->SetBinContent(403,30);
   __37->SetBinContent(404,32);
   __37->SetBinContent(405,37);
   __37->SetBinContent(406,38);
   __37->SetBinContent(407,34);
   __37->SetBinContent(408,13);
   __37->SetBinContent(409,25);
   __37->SetBinContent(410,22);
   __37->SetBinContent(411,32);
   __37->SetBinContent(412,19);
   __37->SetBinContent(413,18);
   __37->SetBinContent(414,18);
   __37->SetBinContent(415,14);
   __37->SetBinContent(416,13);
   __37->SetBinContent(417,19);
   __37->SetBinContent(418,9);
   __37->SetBinContent(419,14);
   __37->SetBinContent(420,7);
   __37->SetBinContent(421,4);
   __37->SetBinContent(422,5);
   __37->SetBinContent(423,6);
   __37->SetBinContent(424,6);
   __37->SetBinContent(425,4);
   __37->SetBinContent(426,4);
   __37->SetBinContent(428,1);
   __37->SetBinContent(432,1);
   __37->SetBinContent(435,2);
   __37->SetBinContent(439,1);
   __37->SetEntries(1000);
   __37->SetStats(0);
   __37->GetXaxis()->SetTitle("B_{r} [ppm]");
   __37->GetXaxis()->SetRange(214,587);
   __37->GetXaxis()->CenterTitle(true);
   __37->GetXaxis()->SetLabelFont(42);
   __37->GetXaxis()->SetTitleSize(0.04);
   __37->GetXaxis()->SetTitleOffset(1.1);
   __37->GetXaxis()->SetTitleFont(42);
   __37->GetYaxis()->SetTitle("Trials / 0.020000 ppm");
   __37->GetYaxis()->CenterTitle(true);
   __37->GetYaxis()->SetNdivisions(4000510);
   __37->GetYaxis()->SetLabelFont(42);
   __37->GetYaxis()->SetTitleSize(0.04);
   __37->GetYaxis()->SetTitleOffset(1.1);
   __37->GetYaxis()->SetTitleFont(42);
   __37->GetZaxis()->SetLabelFont(42);
   __37->GetZaxis()->SetTitleOffset(1);
   __37->GetZaxis()->SetTitleFont(42);
   __37->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("8.01
#pm0.007
");
   pt_LaTex = pt->AddText("0.219
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
