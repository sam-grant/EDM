void Y_27()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_27__57 = new TH1F("Y_27__57","Plane 27",100,-100,100);
   Y_27__57->SetBinContent(30,1);
   Y_27__57->SetBinContent(41,4);
   Y_27__57->SetBinContent(42,16);
   Y_27__57->SetBinContent(43,29);
   Y_27__57->SetBinContent(44,20);
   Y_27__57->SetBinContent(45,20);
   Y_27__57->SetBinContent(46,14);
   Y_27__57->SetBinContent(47,13);
   Y_27__57->SetBinContent(48,13);
   Y_27__57->SetBinContent(49,37);
   Y_27__57->SetBinContent(50,81);
   Y_27__57->SetBinContent(51,44);
   Y_27__57->SetBinContent(52,10);
   Y_27__57->SetBinContent(53,11);
   Y_27__57->SetBinContent(54,10);
   Y_27__57->SetBinContent(55,12);
   Y_27__57->SetBinContent(56,12);
   Y_27__57->SetBinContent(57,17);
   Y_27__57->SetBinContent(58,33);
   Y_27__57->SetBinContent(59,28);
   Y_27__57->SetBinContent(66,1);
   Y_27__57->SetBinContent(69,1);
   Y_27__57->SetBinContent(72,1);
   Y_27__57->SetBinContent(75,1);
   Y_27__57->SetEntries(429);
   Y_27__57->SetLineWidth(3);
   Y_27__57->GetXaxis()->SetTitle("Y [mm]");
   Y_27__57->GetXaxis()->CenterTitle(true);
   Y_27__57->GetXaxis()->SetLabelFont(42);
   Y_27__57->GetXaxis()->SetTitleSize(0.04);
   Y_27__57->GetXaxis()->SetTitleOffset(1.1);
   Y_27__57->GetXaxis()->SetTitleFont(42);
   Y_27__57->GetYaxis()->SetTitle("Ghost tracks");
   Y_27__57->GetYaxis()->CenterTitle(true);
   Y_27__57->GetYaxis()->SetNdivisions(4000510);
   Y_27__57->GetYaxis()->SetLabelFont(42);
   Y_27__57->GetYaxis()->SetTitleSize(0.04);
   Y_27__57->GetYaxis()->SetTitleOffset(1.1);
   Y_27__57->GetYaxis()->SetTitleFont(42);
   Y_27__57->GetZaxis()->SetLabelFont(42);
   Y_27__57->GetZaxis()->SetTitleOffset(1);
   Y_27__57->GetZaxis()->SetTitleFont(42);
   Y_27__57->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
