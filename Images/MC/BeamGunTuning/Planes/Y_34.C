void Y_34()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_34__71 = new TH1F("Y_34__71","Plane 34",100,-100,100);
   Y_34__71->SetBinContent(41,7);
   Y_34__71->SetBinContent(42,10);
   Y_34__71->SetBinContent(43,32);
   Y_34__71->SetBinContent(44,17);
   Y_34__71->SetBinContent(45,18);
   Y_34__71->SetBinContent(46,16);
   Y_34__71->SetBinContent(47,15);
   Y_34__71->SetBinContent(48,14);
   Y_34__71->SetBinContent(49,39);
   Y_34__71->SetBinContent(50,75);
   Y_34__71->SetBinContent(51,46);
   Y_34__71->SetBinContent(52,8);
   Y_34__71->SetBinContent(53,13);
   Y_34__71->SetBinContent(54,11);
   Y_34__71->SetBinContent(55,14);
   Y_34__71->SetBinContent(56,14);
   Y_34__71->SetBinContent(57,18);
   Y_34__71->SetBinContent(58,27);
   Y_34__71->SetBinContent(59,30);
   Y_34__71->SetBinContent(64,1);
   Y_34__71->SetBinContent(70,1);
   Y_34__71->SetBinContent(79,1);
   Y_34__71->SetEntries(427);
   Y_34__71->SetLineWidth(3);
   Y_34__71->GetXaxis()->SetTitle("Y [mm]");
   Y_34__71->GetXaxis()->CenterTitle(true);
   Y_34__71->GetXaxis()->SetLabelFont(42);
   Y_34__71->GetXaxis()->SetTitleSize(0.04);
   Y_34__71->GetXaxis()->SetTitleOffset(1.1);
   Y_34__71->GetXaxis()->SetTitleFont(42);
   Y_34__71->GetYaxis()->SetTitle("Ghost tracks");
   Y_34__71->GetYaxis()->CenterTitle(true);
   Y_34__71->GetYaxis()->SetNdivisions(4000510);
   Y_34__71->GetYaxis()->SetLabelFont(42);
   Y_34__71->GetYaxis()->SetTitleSize(0.04);
   Y_34__71->GetYaxis()->SetTitleOffset(1.1);
   Y_34__71->GetYaxis()->SetTitleFont(42);
   Y_34__71->GetZaxis()->SetLabelFont(42);
   Y_34__71->GetZaxis()->SetTitleOffset(1);
   Y_34__71->GetZaxis()->SetTitleFont(42);
   Y_34__71->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
