void Limits()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 00:28:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1.25,-63.2625,11.25,569.3625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","",100,0,10);
   h__1->SetBinContent(22,2);
   h__1->SetBinContent(23,2);
   h__1->SetBinContent(24,4);
   h__1->SetBinContent(25,1);
   h__1->SetBinContent(26,10);
   h__1->SetBinContent(27,7);
   h__1->SetBinContent(28,15);
   h__1->SetBinContent(29,27);
   h__1->SetBinContent(30,36);
   h__1->SetBinContent(31,53);
   h__1->SetBinContent(32,47);
   h__1->SetBinContent(33,74);
   h__1->SetBinContent(34,113);
   h__1->SetBinContent(35,134);
   h__1->SetBinContent(36,157);
   h__1->SetBinContent(37,187);
   h__1->SetBinContent(38,236);
   h__1->SetBinContent(39,240);
   h__1->SetBinContent(40,295);
   h__1->SetBinContent(41,369);
   h__1->SetBinContent(42,353);
   h__1->SetBinContent(43,404);
   h__1->SetBinContent(44,427);
   h__1->SetBinContent(45,452);
   h__1->SetBinContent(46,420);
   h__1->SetBinContent(47,482);
   h__1->SetBinContent(48,424);
   h__1->SetBinContent(49,430);
   h__1->SetBinContent(50,459);
   h__1->SetBinContent(51,456);
   h__1->SetBinContent(52,455);
   h__1->SetBinContent(53,446);
   h__1->SetBinContent(54,388);
   h__1->SetBinContent(55,393);
   h__1->SetBinContent(56,329);
   h__1->SetBinContent(57,293);
   h__1->SetBinContent(58,259);
   h__1->SetBinContent(59,267);
   h__1->SetBinContent(60,169);
   h__1->SetBinContent(61,162);
   h__1->SetBinContent(62,138);
   h__1->SetBinContent(63,109);
   h__1->SetBinContent(64,82);
   h__1->SetBinContent(65,60);
   h__1->SetBinContent(66,41);
   h__1->SetBinContent(67,30);
   h__1->SetBinContent(68,28);
   h__1->SetBinContent(69,12);
   h__1->SetBinContent(70,8);
   h__1->SetBinContent(71,3);
   h__1->SetBinContent(72,6);
   h__1->SetBinContent(74,1);
   h__1->SetBinContent(75,2);
   h__1->SetBinContent(76,1);
   h__1->SetBinContent(77,1);
   h__1->SetBinContent(79,1);
   h__1->SetEntries(10000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("Blinding shift [ppm]");
   h__1->GetXaxis()->SetRange(1,100);
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Random blinding strings");
   h__1->GetYaxis()->CenterTitle(true);
   h__1->GetYaxis()->SetNdivisions(4000510);
   h__1->GetYaxis()->SetLabelFont(42);
   h__1->GetYaxis()->SetTitleSize(0.04);
   h__1->GetYaxis()->SetTitleOffset(1.1);
   h__1->GetYaxis()->SetTitleFont(42);
   h__1->GetZaxis()->SetLabelFont(42);
   h__1->GetZaxis()->SetTitleOffset(1);
   h__1->GetZaxis()->SetTitleFont(42);
   h__1->Draw("HIST");
   TLine *line = new TLine(1,0,1,506.1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   
   TPaveText *pt = new TPaveText(1.5,350,2,450,"br");
   pt->SetFillColor(0);

   ci = TColor::GetColor("#ff0000");
   pt->SetTextColor(ci);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("BNL");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
